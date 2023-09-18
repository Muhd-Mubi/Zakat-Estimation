1) start of algorithm
2) start of function zakat_mechanism [this function defines the functionality of the zakat and its calculations based on savings gold and silver reserves]
3) define constants gold_price, silver_price, percentage_of_savings and gold_required [they are things that are supposed constant here but the gold price and silver price in actuality keeps changing whereas percentage of savings and gold_required are in actuality to be constant for zakat]
4) calculate silver_price_value by multiplying sliver with silver_price [to get liquified price to calculate the amonut of zakat that needs to be paid off
5) calculate total_gold_cals as the sum of (saving / gold_price) + (silver_price_value) + gold [because the zakat is basically based on the total amount of gold accumilated so the conditioning will be based on it]
6) start if
7) if (total_gold_cale is greater than or equal to gold_required)
	then(calculate liquified_expected_price as total_gold_calc multiplied by gold_price)
	then(calcuate and return the value of zakat to be given as (liquified_expected_price multiplied by precentage_of_savings) [this take out 2.5% of the total to be given as zakat and can be printed]
8) else if (total_gold_calc is less than gold_required)
	then display ("you dont have to pay zakat"
9) else 
	then something has gone wrong
10) end if
11) end of function zakat_mechanism [this function defined the machanism of zakat giving and calculation etc]
12) start of main function [where the inputs etc. are taken conversion take place and the control is sent to zakat_mechanism for calculation of zakat]
13) declare variables saving, gold, silver, selection_gold, selection_silver. [float: savings, float: gold, int: selection_gold, int: selection_silver] [selection is for selecting the cases in conversion cases for if else]
14) display a menu to select the unit for gold 
	opt1) tola
	opt2) gram
	opt3) no gold
15) prompt the users to enter an option and store in selection_gold
16) basess on selected option and store it in selection_gold
17) start if
18) if (selection_gold input is 1)
	then prompt the user to enter gold in the selected unit and sotre it in gold)[in zakat_mechanism function the tola is the deciding factor so it is saved without conversion]
19) else if (selection_gold input is 2)
	then prompt the user to enter gold in the selected unit, convert it to toal and store it in gold [tola is the basic measurement mechanism used]
20) else if (selection_gold input is 3)
	then set the gold value is to be set to 0
21) else 
	then display the selection is invalid.
22) end if
23) display the menu to select the unit for silver
	opt1) Ounce
	opt2) kilogram
	opt3) no silver
24) prompt user to enter an option and store it in "selection_silver"
25) start if
26) if (selection_silver is equal to 1)
	then prompt the user to enter silver in selected unit, and store it in silver. 
27) else if (selection_silver is equal to 2)
	then prompt the user to enter silver in the selected unit, convert it to ounce and store it in silver [the calculating and liquidifying mechanism for silver as defined in zakat_mechanism is defined on ounce, so the calculation is done accordingly]
28) else if (selection_silver is equal to 3)
	then set the silver to 0.
29) else 
	then display that the selection is invalid.
30) end if
31) prompt the user enter his savings and save it in savings variable
32) call the zakat_mechanism with saving, gold and silver as arguments
33) display the result returned by zakat_mechanism
34) end the main function
35) end of algorithm
