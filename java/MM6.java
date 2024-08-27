public class MM6 {
    public static int[] arr(int[] a){
        int i, j;
        int sw, temp;
        int n = a.length;

        if(a[0] == 0 || a[0] < 1)
            return a;

        for(i = 0; i < n - 1; i++){
            sw = i;
            for(j = i + 1; j < n; j++){
                // 내림차순으로 정렬하도록 조건 수정
                if(a[j] > a[sw]){
                    sw = j;
                }
            }
            temp = a[i];
            a[i] = a[sw];
            a[sw] = temp;
        }
        return a;
    }

    public static void main(String[] args){
        int i;
        int[] n = {4, 3, 5, 2, 10};
        arr(n);
        for(i = 0; i < n.length; i++){
            System.out.print(n[i] + " ");
        }
    }
}
