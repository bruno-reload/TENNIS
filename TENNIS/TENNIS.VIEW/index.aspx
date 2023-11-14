<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="index.aspx.cs" Inherits="TENNIS.VIEW.index" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <p>
            Home</p>
        <asp:Button ID="player" runat="server" OnClick="Button1_Click1" Text="Player" />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Team" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="fill" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="match" />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="Award" />
        <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="Phase" />
        <asp:Button ID="Button6" runat="server" OnClick="Button6_Click" Text="Local" />
        <asp:Button ID="Button7" runat="server" OnClick="Button7_Click" Text="Marked" />
        <asp:Button ID="Button8" runat="server" OnClick="Button8_Click" Text="Challeng" />
        <asp:Button ID="Button9" runat="server" OnClick="Button9_Click" Text="find" />
    </form>
</body>
</html>
