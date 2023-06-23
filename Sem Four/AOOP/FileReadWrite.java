import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class ReadWrite {
    String filename;

    ReadWrite(String filename) {
        this.filename = filename;
        System.out.println("File created successfully.");
    }

    void writeToFile(String content) {
        try {
            BufferedWriter writer = new BufferedWriter(new FileWriter(filename));
            writer.write(content);
            writer.close();
            System.out.println("Content written to the file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    String readFromFile() {
        StringBuilder content = new StringBuilder();
        try {
            BufferedReader reader = new BufferedReader(new FileReader(filename));
            String line;
            while ((line = reader.readLine()) != null) {
                content.append(line).append("\n");
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return content.toString();
    }
}

public class FileReadWrite {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the file name: ");
        String filename = sc.nextLine();

        ReadWrite file = new ReadWrite(filename);

        System.out.print("\nEnter your text to write in file: ");
        String fileText = sc.nextLine();

        sc.close();

        file.writeToFile(fileText);

        String content = file.readFromFile();
        System.out.println("\nContent of the file: " + content);
    }
}
