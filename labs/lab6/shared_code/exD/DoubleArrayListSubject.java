/**
* DoubleArrayListSubject.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/

import java.util.ArrayList;

/** 
 * DoubleArrayListSubject class implements Subject
* @authors Braden Tink and Christian Valdez
 * Class has three class variables 
 * 
 */
public class DoubleArrayListSubject implements Subject{
	private double temp;
	public ArrayList<Observer> observers;
	ArrayList<Double> data;
	
	/**
	 * constructor creates a new ArrayList for observers and
	 * data as another 
	 */
	public DoubleArrayListSubject() {
		observers = new ArrayList<Observer>();
		data = new ArrayList<Double>();
	}
	
	/**
	 * Register function registers a observer to the list
	 * Take one argument being an observer 
	 */
	@Override
	public void register(Observer o) {
		observers.add(o);
		o.update(data);
	}
	
	/**
	 * Removes an observer from the list 
	 * One argument which the observer to be removed 
	 */
	public void remove(Observer o) {
		observers.remove(o);
		
	}
	
	/**
	 * notifyObserver loops through the  list of observers and calls
	 * update for each observer 
	 */
	public void notifyObservers() {
		for(int i = 0; i < observers.size(); i++){
			Observer o = observers.get(i);
			o.update(data);
			
		}
	}
	
	/**
	 * Get length returns the length of the data array
	 * @return
	 */
	public int getLength() {
		return data.size();
		
	}
	/**
	 * GetData returns the data of the array by index
	 * which is a passed in integer 
	 * @param index
	 * @return
	 */
	public double getData(int index) {
		return data.get(index).doubleValue();
	}
	
	/**
	 * AddData adds data to the the data array
	 * adds data of the past in double 
	 * @param d
	 */
	public void addData(Double d) {
		data.add(d);
		notifyObservers();
		
	}
	
	/**
	 * setData sets the value of the data array
	 * the index and data value are passed in as 
	 * arguments
	 * @param d
	 * @param pos
	 */
	public void setData(Double d, int pos) {
		data.set(pos, d);
		notifyObservers();
	}
	
	/**
	 * populate function adds an array of doubles to the data
	 * array by calling the addData function with the index
	 * @param d
	 */
	public void populate(double[] d) {
		int n = d.length;
		
		for(int i = 0; i < n; i++) {
			
			addData(d[i]);
		
		}
		
	}
	
	/**
	 * display is function is a non implemented as it is implemented by the observers 
	 */
	public void display() {
		
	
	}


}
