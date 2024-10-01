class Person {
    private String name;
    public Person(String val){
        name = val;
    }
    public String get() {
        return name;
    }
    public void print(){
        System.out.println(name);
    }

}

public class T230313 {
    public static void main(String[] args){
        Person p = new Person("abcd");
        p.print();
        System.out.println(p.get());
    }

}