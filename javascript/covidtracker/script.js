$(document).ready(function () {
    let tableBody = document.getElementById('table');
    tableBody.style.overflow = 'auto';
    tableBody.style.height = '350px';

    let getlist = document.getElementById('getlist');
    getlist.addEventListener('click', buttonClickHandler)
    var x = 0;
    function buttonClickHandler() {
        if (x == 0) {
            x = 1;
            console.log('clicked');
            //instantiate an xhr object
            const xhr = new XMLHttpRequest();

            //open the object
            xhr.open('GET', 'https://frozen-shore-05551.herokuapp.com/https://api.covid19india.org/data.json', true);

            //what to do in progress (optional)
            xhr.onprogress = function () {
                console.log('on progress');
            }
            //what to do when response is ready
            xhr.onload = function () {
                if (this.status == 200) {
                    let obj2 = JSON.parse(this.responseText);
                    console.log(obj2);
                    let tableBody = document.getElementById('tableBody');
                    let str = "";
                    let tablehead = document.getElementById('tablehead');
                    tablehead.innerHTML = `<tr>
            <th scope="col">State</th>
            <th scope="col">Confirmed</th>
            <th scope="col">Recovered</th>
            <th scope="col">active</th>
            <th scope="col">Deaths</th>
          </tr>`
                    for (let key = 1; key <= 40; key++) {
                        str += `<tr>
            <td>${obj2.statewise[key].state}</td>
            <td style="color: #ffc107;">${obj2.statewise[key].confirmed}</td>
            <td style="color: green;">${obj2.statewise[key].recovered}</td>
            <td style="color: blue;">${obj2.statewise[key].active}</td>
            <td style="color: red;">${obj2.statewise[key].deaths}</td>
          </tr>`;
                        tableBody.innerHTML = str;

                    }
                }
                else {
                    console.log('error')
                }
            }
            document.getElementById('table1').style.display = "block";

            //send the request
            xhr.send();
        }
        else {
            document.getElementById('table1').style.display = "none";
            x = 0;
            console.log('unclicked')
        }
    }

    var url = "https://frozen-shore-05551.herokuapp.com/https://api.covid19india.org/data.json"
    $.getJSON(url, function (data) {
        console.log(data);
        var total_active, total_recovered, total_deaths, total_confirmed
        var daily_confirmed, daily_recovered, daily_deaths

        var state = []
        var confirmed1 = []
        var confirmed = []
        var recovered = []
        var deaths = []
        var confirmno = []



        $.each(data.statewise, function (id, obj) {
           // state.push(obj.state)
            confirmed1.push(obj.confirmed)

            //recovered.push(obj.recovered)
            //deaths.push(obj.deaths)
            //console.log(confirmed)
            //console.log(state);
           //console.log(confirmed)
           //console.log(deaths)
            //confirmno.push(obj.confirmed)
        })
        var result = confirmed1.map(i => Number(i));
        result.shift();
        result.sort(function (b, a) { return a - b });
        //remove the first element from array
         console.log(result)
        //confirmed.shift()
        //recovered.shift()
        //deaths.shift()
        
        for (let key = 0; key <= 4; key++){
            for(let k=0;k<=38;k++){
                if (result[key] == parseInt(data.statewise[k].confirmed)) {
                    state.push(data.statewise[k].state)
                    confirmed.push(data.statewise[k].confirmed)
                     recovered.push(data.statewise[k].recovered)
                     deaths.push(data.statewise[k].deaths)
                    console.log(data.statewise[k].confirmed);
                    break;
                }

            
            }

            
        }
        



        total_active = data.statewise[0].active
        total_confirmed = data.statewise[0].confirmed
        total_recovered = data.statewise[0].recovered
        total_deaths = data.statewise[0].deaths
        daily_confirmed = data.cases_time_series[data.cases_time_series.length - 1].dailyconfirmed
        daily_recovered = data.cases_time_series[data.cases_time_series.length - 1].dailyrecovered
        daily_deaths = data.cases_time_series[data.cases_time_series.length - 1].dailydeceased
        var daily_date = data.cases_time_series[data.cases_time_series.length - 1].date
        var time = String(data.statewise[0].lastupdatedtime)
        time = time.slice(0, 10)
        console.log(time)
        $('.head').append(' (as of ' + time + ')')
        $('#active').append(total_active)
        $('#confirmed').append(total_confirmed)
        $('#recovered').append(total_recovered)
        $('#deaths').append(total_deaths)
        $('#dailycases1').append('+' + daily_confirmed + ' on ' + daily_date)
        $('#dailycases2').append('+' + daily_recovered + ' on ' + daily_date)
        $('#dailycases3').append('+' + daily_deaths + ' on ' + daily_date)


        var myChart = document.getElementById('myChart').getContext("2d");
        var chart = new Chart(myChart, {
            type: 'line',
            data: {
                labels: state,
                datasets: [
                    {
                        label: "Deaths",
                        data: deaths,
                        backgroundColor: "red",
                        minBarLength: 100,
                        fill: true
                    },
                    {
                        label: "Recovered Cases",
                        data: recovered,
                        backgroundColor: "#2ec771",
                        minBarLength: 100,
                        fill: true
                    },
                    {
                        label: "Confirmed Cases",
                        data: confirmed,
                        backgroundColor: "#f1c40f",
                        minBarLength: 100,
                        fill: true

                    }
                ]
            },
            options: {
                animations: {
                    tension: {
                        duration: 1000,
                        easing: 'linear',
                        from: 1,
                        to: 0,
                        loop: true
                    }
                },
                plugins: {
                    title: {
                        display: true,
                        text: 'Top 5 affected states',
                        fontsize: 29
                    }
                }
            }
        });


    })

})