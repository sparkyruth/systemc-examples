This is a 2-by-4 decoder example, implementation using and gates and not gates,which is a makefile project and so no need for an IDE. 
Just cd into this folder and run the command 

    make all


A line decoder is a device that changes the input code into a set of signals.<br>
It takes an n-digit binary number and decodes it into 2<sup>n</sup> data lines.
It does the reverse of encoding. <br>
Two invertergates and four and gates were used. In the following truth table, the output D0 is high when both inputs are zero,  output D1 is high when the inputs sre 01,output D2 is high when the inputs are 10,output D3 is high when the inputs are 11. It decodes a two digit binary number. <br>
Its truth table: 
<p align="left">
  <img src="IMAGES/truthtable.png" width="250"/>
</p>

###Circuit:
<p align="left">
  <img src="IMAGES/circuit.png" width="200"/>
</p>

Model of computation:
<p align="left">
  <img src="IMAGES/Moc.png" width="400"/>
</p>
Results:
The above MOC was implemented in systemc (code in this folder) and the following output found from traced signals.<br>
Traced signals timing diagram:
<p align="left">
  <img src="IMAGES/timing_diagram.png" width="1000"/>
<p>

