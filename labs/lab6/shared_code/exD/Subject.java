/**
* Subject.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/

/**
 * Subject is an interface class
* @authors Braden Tink and Christian Valdez
 * 
 * interface has three functions 
 * 	register 
 * 	remove
 *  notifyObservers
 *
 */
interface Subject {
	
	public void register(Observer o);
	
	public void remove(Observer o);
	
	public void notifyObservers();
	
			

}
