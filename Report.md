Name: Tony Dong

EID: qd765

Team Number: F9

## Questions

1. Why does your program need a setup and a loop?

    While the setup defines functions needed later, the loop runs over and over again to implement blinking and flashing.

2. What is the downside to putting all your code in a loop?

    The initialization only needs to be run once, so putting it in the loop slows the program and takes unnecessary space.

3. Why does your code need to be compiled?

    Because it has to be translated into assembly language for the board to read.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    The LED was flickering because the frequency was so low that human eyes can spot the change. The solution is to increase the frequency.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    Because by doing it a closed circuit is formed.

6. What is the difference between synchronous and asynchronous communication?

    While synchronous communication uses clock, asynchronous communication does not.

7. Profile of UART: Sent X bytes in Y time 

    6 bytes in 6.146 ms

8. Profile of SPI: Sent X bytes in Y time

    6 bytes in 0.159 ms

9. Why is SPI so much faster than UART?

    Because while UART is an actual piece of hardware, SPI is a protocal.

10. list one pro and one con of UART

    Pro: no clock is needed.
    Con: size of data frame is only limited to 9 bits.

11. list one pro and one con of SPI

    Pro: it is faster than I2C and UART
    Con: there is no error check unlke UART

12. list one pro and one con of I2C

    Pro: it supports multi-master and multi-slave communication
    Con: it requires more space because it needs resistors

13. Why does I2C need external resistors to work?

    Because the lines are open drain.

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/placeholder.png)

Procedure A, step 4:
![Put path to your image here ->](img/placeholder.png)

Procedure B, UART:
![Put path to your image here ->](img/placeholder.png)

Procedure B, SPI:
![Put path to your image here ->](img/placeholder.png)
