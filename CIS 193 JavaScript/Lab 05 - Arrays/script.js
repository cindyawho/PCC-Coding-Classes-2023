// Put your solution here
function divideArray(numbers) {
    let evenNumbers = [];
    let oddNumbers = [];

    for(i = 0; i < numbers.length; i++){
        if(numbers[i]%2 == 0){
            evenNumbers.push(numbers[i]);
        } else {
            oddNumbers.push(numbers[i]);
        }
    }
    
    evenNumbers.sort(function(a,b){
        return a-b;
    });
    oddNumbers.sort(function(a,b){
        return a -b;
    });

    console.log("Even numbers:");
    if(evenNumbers.length == 0){
        console.log("None");
    } else {
        for(j = 0; j < evenNumbers.length; j++){
            console.log(evenNumbers[j]);
        }
    }
    
    console.log("Odd numbers:");
    if(oddNumbers.length == 0){
        console.log("None");
    } else {
        for(k = 0; k < oddNumbers.length; k++){
            console.log(oddNumbers[k]);
        }
    }
 }