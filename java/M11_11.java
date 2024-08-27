class Car {
    String model;
    String color;
    int yyyy;

    Car(){
        this.model = "승융차";
        this.color = "검정";
        this.yyyy = 2020;
        System.out.println("model:" + model);
    }
    Car(String model, String color, int yyyy){
        this.model = model;
        this.color = color;
        this.yyyy = yyyy;
        System.out.println("model: " + model);
    }
}

public class M11_11{
    public static void main(String args[]) {
        int yyyy= 2020;
        Car c = new Car("SUV", "흰색", yyyy++);
        System.out.println(", year :" + c.model + c.color + c.yyyy);
        Car a = new Car("SUV", "흰색", yyyy++);
        System.out.println(a.yyyy);

    }

}