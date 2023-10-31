package com.example.layoutandwidgets;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    private EditText nameEditText;
    private EditText teamEditText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        nameEditText = findViewById(R.id.nameEditText);
        teamEditText = findViewById(R.id.teamEditText);

        Button nextButton = findViewById(R.id.nextButton);
        nextButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = nameEditText.getText().toString();
                String team = teamEditText.getText().toString();

                Intent intent = new Intent(MainActivity.this, MessageActivity.class);
                intent.putExtra("username", name);
                intent.putExtra("favorite_team", team);
                startActivity(intent);
            }
        });
    }
}