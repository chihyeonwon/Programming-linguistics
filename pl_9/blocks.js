function big() {

    var x = 1;
    {
        var x = 2;
        console.log("x in block:", x);
    }

    console.log("x in big():", x);
}

big();
