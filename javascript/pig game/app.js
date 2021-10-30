var scores, roundScore, activePlayer;

scores = [0,0];
roundScore = 0;
activePlayer = 0;

document.querySelector('.dice').style.display = "none";

document.getElementById('score-0').textContent = '0'; 
document.getElementById('score-1').textContent = '0'; 
document.getElementById('current-0').textContent = '0'; 
document.getElementById('current-1').textContent = '0'; 

// click, function is anonymous function  that doesnot have name and not use for other .
document.querySelector('.btn-roll').addEventListener('click',function(){

    //1. random number
    var dice = Math.floor(Math.random() * 6) + 1;

    //2. display the result
    var diceDom = document.querySelector('.dice');
    diceDom.style.display = "block";
    diceDom.src = 'dice-' + dice +'.png'; 

    //3. update the round score but only if rolled no was not a 1
    if(dice !== 1){
        //add score
        roundScore += dice;
        document.querySelector('#current-' + activePlayer).textContent = roundScore;
    }
    else{
        //next player
    nextPlayer();
    }
}); 

//hold button js

    document.querySelector('.btn-hold').addEventListener('click', function() {
    //add current score to global score
    scores[activePlayer] += roundScore;

    //update the ui
    document.querySelector('#score-' + activePlayer).textContent = scores[activePlayer];

    //check if player won the game
    if(scores[activePlayer] >= 20){
        document.querySelector('#name-' + activePlayer).textContent = 'Winner!';
        document.querySelector('.dice').style.display = "none";
        document.querySelector('.player-' + activePlayer + '-panel').classList.add('active');
      //document.querySelector('.player-' + activePlayer + '-panel').classList.remove('active');
    
    }else{
    //next player
    nextPlayer();
    }
});

    function nextPlayer() {
        activePlayer === 0 ? activePlayer = 1 : activePlayer = 0;
        roundScore = 0; 

    document.getElementById('current-0').textContent = '0';
    document.getElementById('current-1').textContent = '0';

    document.querySelector('.player-0-panel').classList.toggle('active');
    document.querySelector('.player-1-panel').classList.toggle('active');
    document.querySelector('.dice').style.display = "none";
    }

//restart button js
    document.querySelector('.btn-new').addEventListener('click', function(){
    document.querySelector('.dice').style.display = "none";

    document.getElementById('score-0').textContent = '0'; 
    document.getElementById('score-1').textContent = '0'; 
    document.getElementById('current-0').textContent = '0'; 
    document.getElementById('current-1').textContent = '0'; 
    document.querySelector('.player-0-panel').classList.toggle('active');
    document.querySelector('.player-1-panel').classList.toggle('active');
    
    
});
//scores[activePlayer] = scores[activePlayer] + roundScore;

//document.querySelector('.player-0-panel').classList.remove('active');
//document.querySelector('.player-1-panel').classList.add('active');

//document.querySelector('#current-' + activePlayer).textContent = dice;
//document.querySelector('#current-' + activePlayer).innerHTML = '<em>' + dice + '</em>';
