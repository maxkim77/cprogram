class A{
    public void fnA(){
        System.out.println("A");
    }
}

class B extends A {
    public void fnB() {
        System.out.println("B");
    }
}

public class S10 {
  public static void main(String[] args){
    B b = new B();
    b.fnA();
    b.fnB();
  }
}
