import android.os.Bundle; 
import android.view.View; 
import android.widget.EditText; 
import androidx.appcompat.app.AlertDialog; 
import androidx.appcompat.app.AppCompatActivity; 

public class MainActivity extends AppCompatActivity { 
	@Override
	protected void onCreate(Bundle savedInstanceState) { 
		super.onCreate(savedInstanceState); 
		setContentView(R.layout.activity_main); 
	} 

	public void showAlertDialogButtonClicked(View view) { 
		AlertDialog.Builder builder = new AlertDialog.Builder(this); 
		builder.setTitle("Name"); 

		final View customLayout = getLayoutInflater().inflate(R.layout.custom_layout, null); 
		builder.setView(customLayout); 

		builder.setPositiveButton("OK", (dialog, which) -> { 
			EditText editText = customLayout.findViewById(R.id.editText); 
			sendDialogDataToActivity(editText.getText().toString()); 
		}); 
        
		AlertDialog dialog = builder.create(); 
		dialog.show(); 
	} 

	private void sendDialogDataToActivity(String data) { 
		Toast.makeText(this, data, Toast.LENGTH_SHORT).show(); 
	} 
}