abstract class A {
    abstract void fn();
}

class B extends A {
    void fn() {
        System.out.println("B");
    }
}

class C extends A {
    void fn(){
        System.out.println("C");
    }
}

public class S103 {
    public static void main(String[] args) {
        A b = new B();
        A c = new C();
        b.fn();
        c.fn();
    }
    
}
