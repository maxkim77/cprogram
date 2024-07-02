class S2 {
    static int count = 0;
}
public class S2Main {
    public static void main (String[] args) {
        S2 s = new S2();
        s.count++;
        System.out.println(s.count);
        s.count++;
        System.out.println(s.count);
    }
}
