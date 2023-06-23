public class Pattern {
    public static void main(String[] args) {
        int a = 2;
        for (int i = 1; i < 6; i++) {
            for (int j = 0; j < i; j++) {
                if (a / 10 == 0) {
                    System.out.print("0" + a + " ");
                } else {
                    System.out.print(a + " ");
                }
                a = a + 2;
            }
            System.out.println(" ");
        }
    }
}
