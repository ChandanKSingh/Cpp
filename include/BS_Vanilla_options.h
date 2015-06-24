#ifndef BS_VANILLA_OPTIONS_H
#define BS_VANILLA_OPTIONS_H


class BS_Vanilla_options
{
    public:
        /*BS_Vanilla_options();

        template<class Numeric>
            Numeric Max(const Numeric& x, const Numeric& y);

        template<class Numeric>
            Numeric Min(const Numeric& x, const Numeric& y);
*/
        // Constructors and destructor, demo code not correc file names or setup.
        //Point(); // Default constructor
       // Point(double xs, double ys); // Construct with coordinates
       // Point(const Point& source); // Copy constructor

        // Accessing the "global" object
        static Point& GetOriginPoint();

        Point MidPoint(const Point& p2) const;


        // Selectors
        double X() const; // Return x
        double Y() const; // Return y

        // Modifiers
        void X(double NewX); // Set x
        void Y(double NewY); // Set y

        virtual ~Point(); // Destructor
        // Present value of a series
        //virtual ~BS_Vanilla_options();

    protected:
    private:
        void init(double xs, double ys);

        // Properties for x- and y-coordinates
        double x;
        double y;

        static Point OriginPoint;

};



#endif // BS_VANILLA_OPTIONS_H
