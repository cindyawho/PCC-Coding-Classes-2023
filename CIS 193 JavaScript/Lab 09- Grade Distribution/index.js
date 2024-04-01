function parseScores(scoresString) {
   let scoresArray = scoresString.split(" ");
   // for(let i = 0; i < scoresArray.length; i++){
   //    console.log(scoresArray[i]);
   // }
   return scoresArray;
}

function buildDistributionArray(scoresArray) {
   // TODO: Compete the function
   let scores = [0, 0, 0, 0, 0];
   let size = scoresArray.length;
   for(let i = 0; i < size; i++){
      if(scoresArray[i] >= 90){
         scores[0] += 1;
      } else if(scoresArray[i] >= 80){
         scores[1] += 1;
      } else if(scoresArray[i] >= 70){
         scores[2] += 1;
      } else if(scoresArray[i] >= 60){
         scores[3] += 1;
      } else {
         scores[4] += 1;
      }
   }
   // for(let i = 0; i < scores.length; i++){
   //    console.log(scores[i]);
   // }
   return scores;
}

function setTableContent(userInput) {
   // TODO: Compete the function
   scoresArray = parseScores(userInput);
   organizedScores = buildDistributionArray(scoresArray);
   
   let row1 = document.getElementById("firstRow");//.innerHTML;
   for (let j = 0; j < 5; j++) {
      var cell = row1.insertCell(j);
      
      let div = document.createElement("div");
      div.className = "bar" + String(j);
      cell.appendChild(div);

      //need to add style of height something like
      div.style.height = organizedScores[j]*10 + "px";
    }

   let row3 = document.getElementById("thirdRow");//.innerHTML;
   for (let k = 0; k < organizedScores.length; k++) {
      var cell = row3.insertCell(k);
      // Add text to the new cells:
      cell.innerHTML = organizedScores[k];
    }
}

// The argument can be changed for testing purposes
setTableContent("45 78 98 83 86 99 90 59");