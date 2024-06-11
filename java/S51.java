import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class S51 {
    public static void main(String[] args) {
        try {
            String a = null;
            BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
            // 입력을 받기 위한 코드 추가
            a = r.readLine();
            System.out.println(a);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
