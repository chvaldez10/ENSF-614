/**
 
Filename.java
ENSF 614 Fall 2023 LAB 6 - EXERCISE B and C
@authors Braden Tink and Christian Valdez
Submitted On: Nov 11, 2023
*/

import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject{
	private double temp;
	public ArrayList<Observer> observers;
	ArrayList<Double> data;
	
	public DoubleArrayListSubject() {
		observers = new ArrayList<Observer>();
		data = new ArrayList<Double>();
	}
	
	@Override
	public void register(Observer o) {
		observers.add(o);
		o.update(data);
	}
	
	public void remove(Observer o) {
		observers.remove(o);
		notifyObservers();
		
	}
	public void notifyObservers() {
		for(int i = 0; i < observers.size(); i++){
			Observer o = observers.get(i);
			o.update(data);
			
		}
	}
	

	public int getLength() {
		return data.size();
		
	}
	public double getData(int index) {
		return data.get(index).doubleValue();
	}
	
	public void addData(Double d) {
		data.add(d);
		notifyObservers();
		
	}
	
	public void setData(Double d, int pos) {
		data.set(pos, d);
		notifyObservers();
	}
	
	public void populate(double[] d) {
		int n = d.length;
		
		for(int i = 0; i < n; i++) {
			
			addData(d[i]);
		
		}
		
	}
	
	public void display() {
		
		
		

	}


}
