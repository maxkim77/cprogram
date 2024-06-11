class A {
    public void fn(){
        System.out.println("A");
    }
}
class B extends A {
    public void fn() {
        System.out.println("B");
    }
}
public class S102 {
    public static void main(String args[]){
        A a = new B();
        a.fn();
    }
}
