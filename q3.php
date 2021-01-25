<?php
// Challenge : 3

/*Explain how you would
extend the class below to add ECO, SPORT, OFF-ROAD driving modes.*/

/* Antony Munyao
25th Jan 2021*/

class DriverControl {
    public $mode;
    public $etc;

  public function drive(){
//...
//accessible by classes extending DriverControl
  }

  protected function can() {
    //...
    //method not accessible by classes extending as it si protected
  }

}


//Classes extending Parent class DriverControl can access its methods but not protected ones.


// ECO extends DriverControl
class Eco extends DriverControl {
  public function economy() {
    //...
    //can access parent class methods (not protected)
  }
}

// SPORT extends DriverControl
class Sport extends DriverControl {
  public function turbo() {
    //...
    //do some stuff here
  }
}

// OFF_ROAD extends DriverControl
class OffRoad extends DriverControl {
  public function safari() {
    //...
    //do something hapa
  }
}

?>