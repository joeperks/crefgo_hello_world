package main

//extern int CFunction();
import "C"
import "fmt"

func main() {
  fmt.Println("Hello from Golang main function!")
  //Calling a CFunction in order to have C call the GoFunction
  C.CFunction();
}

//export GoFunction
func GoFunction(str *C.char) {
  fmt.Println("Hello from GoFunction!")
}
