class Parent{
    int x = 100;
    Parent() {
        this(500);
    } // Parent 클래스에서 매개변수를 1개가지는 Parent(int x)를 호출하고 x에 매개변수 전달
    
    Parent(int x){
        this.x = x;
    }
    // 이 객체의 x 라는 맴버변수에 500을 대입
    int getX(){
        return x;
    }
}

class Child extends Parent{
    int x = 4000;
    Child() {
        this(5000);
    }
    //자식 클래스인 Child의 생성자인 Child 호출
    // this로 Child(int x) 에 매개변수 전달
    // Child의 맴버변수인 X에 5000을 저장
    Child(int x){
        this.x = x;
    }
    int getX(){
        return x;
    }

    int getSuperX() {
        return super.x;
    }


}


public class T230220 {

    public static void main(String[] args){
        Child obj= new Child();
        // new Child 에의해 Child라는 객체를 생성해서 Heap 메모리에 할당
        // Child란 참조자로형 변수 obj에 Heap 메모리 주소 저장
        System.out.println(obj.getX());
        System.out.println(obj.getSuperX());
        // obj라는 참조자료형 변수의 getX() 메서드 실행

    }


    
}
