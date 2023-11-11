package exD;

import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer{
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    public FiveRowsTable_Observer(DoubleArrayListSubject d) {
        doubleArrayList = d;
        doubleArrayList.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> d) {
        this.data = d;
        display();
    }

    public void display() {
        int numColumns = (int) Math.ceil(data.size() / 5.0);

        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < numColumns; col++) {
                int index = col * 5 + row;
                if (index < data.size()) {
                    System.out.print(data.get(index) + " ");
                }
            }
            System.out.println();
        }
        System.out.println();
    }
}
