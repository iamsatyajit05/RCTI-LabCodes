package Sem_Five.MAD.LayoutAndWidgets;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first);
    }

    public void goToSecondActivity(View view) {
        setContentView(R.layout.activity_second);
    }
}