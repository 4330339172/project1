using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;

namespace test
{

    public class TemplatedControl1 : TemplatedControl
    {

        /// <summary>
        /// IsCapable StyledProperty definition
        /// </summary>
        public static readonly StyledProperty<string> LargetextProperty =
            AvaloniaProperty.Register<TemplatedControl1, string>(nameof(Largetext), defaultValue: "LARGE TEXT");

        /// <summary>
        /// Gets or sets the IsCapable property. This StyledProperty
        /// indicates ....
        /// </summary>
        public string Largetext
        {
            get => this.GetValue(LargetextProperty);
            set => SetValue(LargetextProperty, value);
        }


        /// <summary>
        /// IsCapable StyledProperty definition
        /// </summary>
        public static readonly StyledProperty<string> SmalltextProperty =
            AvaloniaProperty.Register<TemplatedControl1, string>(nameof(Smalltext),defaultValue:"SMALL TEXT");

        /// <summary>
        /// Gets or sets the IsCapable property. This StyledProperty
        /// indicates ....
        /// </summary>
        public string Smalltext
        {
            get => this.GetValue(SmalltextProperty);
            set => SetValue(SmalltextProperty, value);
        }


    }
}