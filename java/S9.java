public class S9 {

    private int a;
    public void setA(int a){
        this.a = a;
    }
    public int getA(){
        return a;
    }
    public static void main(String[] args){
        S9 s = new S9();
        s.setA(5);
        System.out.println(s.getA());
    }
}
