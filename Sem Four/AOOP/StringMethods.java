public class StringMethods { 
    public static void main(String[] args) {
        String name = "James";

        System.out.println("Initial string value: " + name);

        System.out.print("\ncharAt() for 0th index: ");
        System.out.println(name.charAt(0));

        System.out.println("\nAdding Bond to name with format(): ");
        name = String.format("%s Bond", name);
        System.out.println("After formating the string value: " + name);

        System.out.print("\nDoes string contains() Bond? ");
        System.out.println(name.contains("Bond"));

        System.out.print("\nLnegth of string: ");
        System.out.println(name.length());

        System.out.println("\nString split with whitespace:");
        String[] result = name.split(" ");
        for (String str : result) {
            System.out.print("[" + str + "] ");
        }
    }
}
