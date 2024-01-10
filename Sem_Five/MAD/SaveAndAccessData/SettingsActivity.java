package Sem_Five.MAD.SaveAndAccessData;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class SettingsActivity extends AppCompatActivity {
    private TextView dataTextView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_settings);

        dataTextView = findViewById(R.id.dataTextView);

        SharedPreferences preferences = getSharedPreferences("MyPrefs", MODE_PRIVATE);
        String data = preferences.getString("myData", "No data found");
        dataTextView.setText(data);
    }
}