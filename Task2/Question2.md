Q; Find the maximum number in any of three variables.

Start
    Print "Input Three Numbers"
    Input n1
    Input n2
    Input n3

    IF (n1 > n2) AND (n1 > n3) THEN
        Print n1, "is the largest"
    ELSE IF (n2 > n1) AND (n2 > n3) THEN
        Print n2, "is the largest"
    ELSE IF (n3 > n1) AND (n3 > n2) THEN
        Print n3, "is the largest"
    ELSE IF (n1 = n2) AND (n1 > n3) THEN
        Print "n1 and n2 are equal and are the largest"
    ELSE IF (n2 = n3) AND (n2 > n1) THEN
        Print "n2 and n3 are equal and are the largest"
    ELSE IF (n1 = n3) AND (n1 > n2) THEN
        Print "n1 and n3 are equal and are the largest"
    ELSE
        Print "All three numbers are equal"

End
