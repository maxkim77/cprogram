public class T20 {
    public static void main(String[] args) {
        int[] result = new int[5];
        int[] arr = {79, 34, 10, 99, 50};
        for (int i = 0; i < 5; i++){
            result[i] = 1;
            for(int j=0;j<5;j++){
                if(arr[i]<arr[j]) result[i]++;
            }
        }
        for(int k=0; k<5; k++){
            System.out.println(result[k]);
        }
    }
    
}
j i 0 1 2 3 4
0   1 2 2 1 2
1   1 2 3 1 2
2   1 2 3 1 2
3   2 3 4 1 3
4   2 4 5 1 3.,,.....................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
