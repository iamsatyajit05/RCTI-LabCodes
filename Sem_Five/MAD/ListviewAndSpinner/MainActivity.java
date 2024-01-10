package Sem_Five.MAD.ListviewAndSpinner;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.Spinner;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {
    private Spinner spinner;
    private EditText editText;
    private Button addButton;
    private ListView listView;
    private List<String> items;
    private ArrayAdapter<String> adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        spinner = findViewById(R.id.spinner);
        editText = findViewById(R.id.editText);
        addButton = findViewById(R.id.addButton);
        listView = findViewById(R.id.listView);

        items = new ArrayList<>();
        adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, items);
        listView.setAdapter(adapter);

        String[] spinnerItems = {"Add", "Update", "Remove"};
        ArrayAdapter<String> spinnerAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, spinnerItems);
        spinnerAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(spinnerAdapter);

        addButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String item = editText.getText().toString();
                if (!item.isEmpty()) {
                    int selectedItemPosition = spinner.getSelectedItemPosition();
                    if (selectedItemPosition == 0) {
                        addItem(item);
                    } else if (selectedItemPosition == 1) {
                        updateItem(item);
                    } else if (selectedItemPosition == 2) {
                        removeItem(item);
                    }
                }
            }
        });
    }

    private void addItem(String item) {
        items.add(item);
        adapter.notifyDataSetChanged();
        editText.setText("");
    }

    private void updateItem(String newItem) {
        int selectedItemPosition = spinner.getSelectedItemPosition();
        if (selectedItemPosition >= 0 && selectedItemPosition < items.size()) {
            items.set(selectedItemPosition, newItem);
            adapter.notifyDataSetChanged();
            editText.setText("");
        }
    }

    private void removeItem(String item) {
        if (items.contains(item)) {
            items.remove(item);
            adapter.notifyDataSetChanged();
            editText.setText("");
        }
    }
}