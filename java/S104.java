interface A{
    void fn();
}
class B implements A{
    public void fn(){
        System.out.println("B");
    }
}
class C implements A{
    public void fn(){
        System.out.println("C");
    }
}

public class S104 {

    public static void main(String[] args){
        A b = new B();
        A c = new C();
        b.fn();
        c.fn();
    }
}
