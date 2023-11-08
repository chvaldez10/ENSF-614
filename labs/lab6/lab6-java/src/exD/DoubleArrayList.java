package exD;

import java.util.ArrayList;

public class DoubleArrayList {
    private ArrayList<Observer> observers;
    private ArrayList<Double> data;

    public DoubleArrayList() {
        observers = new ArrayList<>();
        data = new ArrayList<>();
    }

    public void register(Observer o) {
        observers.add(o);
        o.update(data);
    }


    public void remove(Observer o) {
        observers.remove(o);
    }

    public void addData(double d) {
        data.add(d);
        notifyObserver();
    }

    public void setData(int index, double value) {
        data.set(index, value);
        notifyObserver();
    }

    public void populate(ArrayList<Double> arr) {
        data = new ArrayList<Double>();
        for(double d : arr) {
            addData(d);
        }
        notifyObserver();
    }

    public void notifyObserver(){
        for(int i=0; i<observers.size(); i++) {
            Observer o = observers.get(i);
            o.update(data);
        }
    }
}
