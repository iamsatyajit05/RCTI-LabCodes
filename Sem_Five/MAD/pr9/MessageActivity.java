package com.example.layoutandwidgets;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MessageActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_message);

        TextView usernameTextView = findViewById(R.id.usernameTextView);
        TextView teamTextView = findViewById(R.id.teamTextView);

        Intent intent = getIntent();

        String username = intent.getStringExtra("username");
        String favoriteTeam = intent.getStringExtra("favorite_team");

        String message1 = "Hello, " + username;
        usernameTextView.setText(message1);

        String message2 = "We hope " + favoriteTeam + " will win the next IPL season.";
        teamTextView.setText(message2);
    }
}