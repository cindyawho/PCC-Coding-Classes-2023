function calcWordFrequencies() {
    let frequencies = new Map();
    let input = prompt("Hello");
    wordArray = input.split(" ");
    for(let i = 0; i < wordArray.length; i++){
        //let amount = 0;
        if(!frequencies.has(wordArray[i])){
            frequencies.set(wordArray[i], 1);
        }
        else{
            let amount = frequencies.get(wordArray[i]);
            frequencies.set(wordArray[i], amount + 1);
        }
    }

    for(let [word, amount] of frequencies){
        console.log(word + " " + amount);
    }
}