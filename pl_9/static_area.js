function big() {
    function sub1() {
        var x = 7;
        sub2();
        console.log("x in sub1():", x);
    }

    function sub2() {
        var y = x;
        console.log("x in sub2():", x);
    }

    var x = 3;
    sub1();
    console.log("x in big():", x);
}

big();
