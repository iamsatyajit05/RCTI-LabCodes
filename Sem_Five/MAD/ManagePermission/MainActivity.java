package Sem_Five.MAD.ManagePermission;

import android.bluetooth.BluetoothAdapter;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

public class MainActivity extends AppCompatActivity {
    private static final int REQUEST_BLUETOOTH_PERMISSION = 102;
    private static final int REQUEST_WIFI_PERMISSION = 103;

    private Button bluetoothToggleButton;
    private Button wifiToggleButton;
    private BluetoothAdapter bluetoothAdapter;
    private WifiManager wifiManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        bluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
        bluetoothToggleButton = findViewById(R.id.bluetoothToggleButton);

        bluetoothToggleButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) { toggleBluetoothState(); }
        });

        wifiManager = (WifiManager) getSystemService(WIFI_SERVICE);
        wifiToggleButton = findViewById(R.id.wifiToggleButton);

        wifiToggleButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) { toggleWifiState(); }
        });
    }

    private void toggleBluetoothState() {
        if (ContextCompat.checkSelfPermission(this, android.Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, new String[]{android.Manifest.permission.BLUETOOTH_CONNECT}, REQUEST_BLUETOOTH_PERMISSION);
        } else {
            if (bluetoothAdapter.isEnabled()) {
                bluetoothAdapter.disable();
                Toast.makeText(this, "Bluetooth is already enabled.", Toast.LENGTH_SHORT).show();
            } else {
                Intent enableBluetoothIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                startActivityForResult(enableBluetoothIntent, REQUEST_BLUETOOTH_PERMISSION);
            }
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_BLUETOOTH_PERMISSION) {
            Toast.makeText(this, resultCode == RESULT_OK ? "Bluetooth is enabled." : "Bluetooth enable request was denied.", Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == REQUEST_BLUETOOTH_PERMISSION) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                toggleBluetoothState();
            }
        }
    }

    private void toggleWifiState() {
        if (ContextCompat.checkSelfPermission(this, android.Manifest.permission.CHANGE_WIFI_STATE) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, new String[]{android.Manifest.permission.CHANGE_WIFI_STATE}, REQUEST_WIFI_PERMISSION);
        } else {
            wifiManager.setWifiEnabled(!wifiManager.isWifiEnabled());

        }
    }
}