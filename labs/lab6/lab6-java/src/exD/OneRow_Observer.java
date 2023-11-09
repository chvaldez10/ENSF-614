package exD;

import java.util.ArrayList;

public class OneRow_Observer implements Observer{
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    public OneRow_Observer(DoubleArrayListSubject d) {
        doubleArrayList = d;
        doubleArrayList.register(this);
    }

    @Override
    public void update(ArrayList<Double> d) {
        this.data = d;
        display();
    }

    public void display() {
        for (double d : data) {
            System.out.print(d + " ");
        }
        System.out.println("\n");
    }

}
