<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Lato:400,700|Montserrat:900">
    <title>Document</title>
    <style>

body{
    background-color: white;
}
  
#timer {
  color: #eeeeee;
  text-align: center;
  text-transform: uppercase;
  font-family: 'Lato', sans-serif;
  font-size: .7em;
  letter-spacing: 5px;
}

.days {
  display: inline-block;
  padding: 20px;
  width: 100px;
  border-radius: 5px;
}

.days {
  background: ##CA7AFF;
}


.numbers {
  font-family: 'Montserrat', sans-serif;
  color:  #ffffff;
  font-size: 4em;
  text-align: center;
}


.purple {
  position: absolute;
  background:  ##CA7AFF;
  left: 18%;
  top: 9%;
  height: 65px;
  width: 70px;
 
}


    </style>
</head>
<body>
    
<div id="timer">

    <div class="days"> 
        <div id="days" class="numbers "> </div>days</div> 
      </div>

</div>

</body>
<script>
    const year = new Date().getFullYear();
const myDate = new Date('Dec 02, 2023 00:00:00');
console.log(myDate);

// countdown
let timer = setInterval(function() {

  // get today's date
  const today = new Date().getTime();

  // get the difference
  const diff = myDate - today;

  // math
  let days = Math.floor(diff / (1000 * 60 * 60 * 24));
 

  // display
  document.getElementById("days").innerHTML=days



}, 1);
</script>
</html>
