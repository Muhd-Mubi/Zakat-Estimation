1) Start
2) Function zakat_mechanism(saving, gold, silver)
   - Constants: gold_price, silver_price, percentage_of_savings, gold_required
   - Calculate silver_price_value = silver * silver_price
   - Calculate total_gold_calc = (saving / gold_price) + (silver_price_value) + gold
   - If (total_gold_calc >= gold_required)
     - Calculate liquified_expected_price = total_gold_calc * gold_price
     - Calculate zakat = liquified_expected_price * percentage_of_savings
     - Return zakat
   - Else If (total_gold_calc < gold_required)
     - Display "You don't have to pay zakat"
   - Else
     - Display "Something went wrong"
   - End If
3) End of Function zakat_mechanism
4) Start of main function
   - Declare variables: saving, gold, silver, selection_gold, selection_silver
5) Display a menu to select the unit for gold:
   - Option 1: Tola
   - Option 2: Gram
   - Option 3: No Gold
6) Prompt the user to enter an option and store it in selection_gold
7) If (selection_gold is 1)
   - Prompt the user to enter gold in the selected unit and store it in gold
8) Else If (selection_gold is 2)
   - Prompt the user to enter gold in the selected unit, convert it to tola, and store it in gold
9) Else If (selection_gold is 3)
   - Set gold to 0
10) Else
    - Display "Invalid Selection"
11) Display a menu to select the unit for silver:
    - Option 1: Ounce
    - Option 2: Kilogram
    - Option 3: No Silver
12) Prompt the user to enter an option and store it in selection_silver
13) If (selection_silver is 1)
    - Prompt the user to enter silver in the selected unit and store it in silver
14) Else If (selection_silver is 2)
    - Prompt the user to enter silver in the selected unit, convert it to ounce, and store it in silver
15) Else If (selection_silver is 3)
    - Set silver to 0
16) Else
    - Display "Invalid Selection"
17) Prompt the user to enter their savings and store it in saving
18) Call zakat_mechanism(saving, gold, silver) and store the result in zakat_amount
19) Display zakat_amount
20) End of main function
21) End
