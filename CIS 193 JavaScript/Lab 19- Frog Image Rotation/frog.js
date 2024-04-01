const directions = {
   UP: 'up',
   DOWN: 'down',
   LEFT: 'left',
   RIGHT: 'right'
}

window.addEventListener("load", function () {
   const canvas = document.querySelector("canvas");

   // Draw 4 frogs facing different directions
   drawFrog(canvas, 50, 50, directions.UP);
   drawFrog(canvas, 180, 50, directions.DOWN);   
   drawFrog(canvas, 50, 180, directions.LEFT);
   drawFrog(canvas, 180, 180, directions.RIGHT);
});

function drawFrog(canvas, x, y, direction = directions.UP) {   
   const context = canvas.getContext("2d");
   const frogImg = document.querySelector("img");
   //Three steps
   //1. Translate the canvas origin from (0, 0) to the center of the frog image
   //2. Rotate
   //3. Translate back to (0,0)
   switch (direction) {
      case directions.DOWN:
         // TODO: Translate, rotate, and translate
         //console.log("Before translation - x:", x, "y:", y);
         context.translate(x + frogImg.width / 2, y + frogImg.height / 2);
         //console.log("After translation - x:", x, "y:", y);
         context.rotate(Math.PI);
         context.translate(-(x + frogImg.width / 2), -(y + frogImg.height / 2));
         //context.translate(x - 4*frogImg.width, y - 1.65*frogImg.height);
         //context.translate(0,0);
         //context.translate(-frogImg.width / 2, -frogImg.height / 2);
         //console.log("After translation (0,0) - x:", x, "y:", y);
         break;
      case directions.LEFT:
         // TODO: Translate, rotate, and translate
         context.translate(x + frogImg.width / 2, y + frogImg.height / 2);
         context.rotate(-Math.PI / 2);
         context.translate(-(x + frogImg.width / 2), -(y + frogImg.height / 2));
         //context.translate(0,0);         
         break;
      case directions.RIGHT:
         // TODO: Translate, rotate, and translate
         context.translate(x + frogImg.width / 2, y + frogImg.height / 2);
         context.rotate(Math.PI / 2);
         context.translate(-(x + frogImg.width / 2), -(y + frogImg.height / 2));
         //context.translate(0,0);
         break;
   }

   context.drawImage(frogImg, x, y);

   // Necessary so next call to drawFrog isn't rotated or translated
   context.resetTransform();
}