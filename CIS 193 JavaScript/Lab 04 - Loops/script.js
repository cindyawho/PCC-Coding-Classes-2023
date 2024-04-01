function drawTriangle(triangleSize) {

   for( i = 0; i < triangleSize; i++){
      let asteriskString = "";
      for(j = 0; j < i + 1; j++){
         asteriskString += "*";
      }
      console.log(asteriskString);
   }
   
}