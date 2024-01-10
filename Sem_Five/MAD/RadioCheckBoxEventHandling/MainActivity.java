package Sem_Five.MAD.RadioCheckBoxEventHandling;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

import android.view.View;
import android.widget.CheckBox;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private CheckBox checkBox;
    private RadioButton maleRadioButton;
    private RadioButton femaleRadioButton;
    private TextView checkboxStatus;
    private TextView radioStatus;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        checkBox = findViewById(R.id.checkBox);
        maleRadioButton = findViewById(R.id.maleRadioButton);
        femaleRadioButton = findViewById(R.id.femaleRadioButton);
        checkboxStatus = findViewById(R.id.checkboxStatus);
        radioStatus = findViewById(R.id.radioStatus);

        checkBox.setChecked(false);
        checkboxStatus.setText("I don't agree to TnC");

        RadioGroup genderRadioGroup = findViewById(R.id.genderRadioGroup);
        maleRadioButton.setChecked(false);
        femaleRadioButton.setChecked(false);
        radioStatus.setText("No gender selected.");

        checkBox.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (checkBox.isChecked()) {
                    checkboxStatus.setText("I agree to TnC.");
                } else {
                    checkboxStatus.setText("I don't agree to TnC.");
                }
            }
        });

        genderRadioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                if (checkedId == R.id.maleRadioButton) {
                    radioStatus.setText("Gender: Male");
                } else if (checkedId == R.id.femaleRadioButton) {
                    radioStatus.setText("Gender: Female");
                } else {
                    radioStatus.setText("No gender selected.");
                }
            }
        });
    }
}