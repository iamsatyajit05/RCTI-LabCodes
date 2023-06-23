import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class ArrayListAndLinkedList {
    public static void main(String[] args) {
        List<String> weekdays = new ArrayList<>();
        weekdays.add("Monday");
        weekdays.add("Tuesday");
        weekdays.add("Wednesday");
        weekdays.add("Thursday");
        weekdays.add("Friday");
        weekdays.add("Saturday");
        weekdays.add("Sunday");

        System.out.println("Weekdays:");
        for (int i = 0; i < weekdays.size(); i++) {
            System.out.println(weekdays.get(i));
        }

        List<String> months = new LinkedList<>();
        months.add("January");
        months.add("February");
        months.add("March");
        months.add("April");
        months.add("May");
        months.add("June");
        months.add("July");
        months.add("August");
        months.add("September");
        months.add("October");
        months.add("November");
        months.add("December");

        System.out.println("\nMonths:");
        for (int i = 0; i < months.size(); i++) {
            System.out.println(months.get(i));
        }
    }
}
