using Avalonia;
using Avalonia.Controls;
using Avalonia.Media;
using System;

namespace test.Views;

public partial class MainView : UserControl
{
    #region private Member

    private Control mChannelConfigPopup;
    private Control mChannelConfigButton;
    private Control mMainGrid;

    #endregion
    public MainView()
    {
        InitializeComponent();

        mChannelConfigButton = this.FindControl<Control>(name: "ChannelConfigurationButton") ?? throw new Exception(message: "Cannot find Channel Configuration Button by name");
        mChannelConfigPopup = this.FindControl<Control>(name: "ChannelConfigurationPopup") ?? throw new Exception(message: "Cannot find Channel Configuration Popup by name");
        mMainGrid = this.FindControl<Control>(name: "MainGrid") ?? throw new Exception(message: "Cannot find MainGrid by name");

    }

    public override void Render(DrawingContext context)
    {
        base.Render(context);

        //mChannelConfigPopup.Margin = new Thickness(
        //    left: 0,
        //    top: 0,
        //    right: 0,
        //    bottom: 0);
    }
}
