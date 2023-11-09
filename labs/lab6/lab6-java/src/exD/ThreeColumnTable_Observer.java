package exD;

import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    public ThreeColumnTable_Observer(DoubleArrayListSubject d) {
        doubleArrayList = d;
        doubleArrayList.register(this);
    }

    @Override
    public void update(ArrayList<Double> d) {
        this.data = d;
        display();
    }

    public void display() {
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
            if ((i+1)%3==0){
                System.out.println();
            }
        }
        System.out.println("\n");
    }
}
