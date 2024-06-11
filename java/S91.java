public class S91{
    public S91(){
        System.out.println("A");
    }
    public S91(int a){
        System.out.println("B: "+a);
    }
    public void fn(){
        System.out.println("C");
    }
    public static void main(String[] args){
        S91 s1 = new S91();
        S91 s2 = new S91();
        s1.fn();
    }
}