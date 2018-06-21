using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;

namespace GameTestSerialCommunication
{
#if WINDOWS || XBOX
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        /*static void Main(string[] args)
        {
            using (Game1 game = new Game1())
            {
                game.Run();
            }
        }*/

        static void Main (string[] args)
        {

            using (Game1 game = new Game1())
            {
                game.Run();
            }

            SerialPort myport = new SerialPort();
            myport.BaudRate = 9600;
            myport.PortName = "COM3";
            myport.Open();

            while (true)
            {
                string data_rx = myport.ReadLine();
                Console.WriteLine(data_rx);
            }
        }
    }
#endif
}

