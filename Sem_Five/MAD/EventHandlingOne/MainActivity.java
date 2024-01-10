package Sem_Five.MAD.EventHandlingOne;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

import android.text.Editable;
import android.text.TextWatcher;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first);

        Button resetBtn = findViewById(R.id.resetBtn);
        EditText editText = findViewById(R.id.editText);
        TextView textView = findViewById(R.id.textView);
        ImageView imageView = findViewById(R.id.imageView);
        TextView countView = findViewById(R.id.countView);

        resetBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                editText.setText("");
            }
        });

        editText.addTextChangedListener(new TextWatcher() {
            @Override
            public void beforeTextChanged(CharSequence charSequence, int i, int i1, int i2) {}

            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) {
                textView.setText("Content: " + editText.getText());
            }

            @Override
            public void afterTextChanged(Editable editable) {}
        });

        imageView.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent motionEvent) {
                Integer count = Integer.parseInt(countView.getText().toString()) + 1;
                countView.setText(String.valueOf(count));
                return true;
            }
        });
    }
}